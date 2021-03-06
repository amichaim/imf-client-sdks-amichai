/**
	Licensed Materials - Property of IBM

	(C) Copyright 2015 IBM Corp.

	Unless required by applicable law or agreed to in writing, software
	distributed under the License is distributed on an "AS IS" BASIS,
	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	See the License for the specific language governing permissions and
	limitations under the License.
*/

//
//  BaseProvisioningChallengeHandler.h
//  WorklightStaticLibProject
//
//  Created by Sandhya Suman on 08/05/14.
//  Base class for native device provisioing classes
//

#import "BaseDeviceAuthChallengeHandler.h"

/**
 * Abstract base class for the device provisioning challenge handlers.
 * You must extend it to implement your own version of a device provisioning challenge handler, for example CustomProvisioningChallengeHandler.
 */
@interface BaseProvisioningChallengeHandler : BaseDeviceAuthChallengeHandler {

@private
    NSString *provisioningEntity;
    int numOfFailures;
}

extern int const RSA_KEY_SIZE;
extern int const MAX_NUMBER_OF_FAILURES;
extern NSString * const APPLICATION_ID;
extern NSString * const GROUP_ID;
extern NSString * const DEVICE_ID;
extern NSString * const CSR_PARAM_NAME;
extern NSString * const CERTIFICATE;

extern NSString * const ID_PARAM_NAME;
extern NSString * const TOKEN_PARAM_NAME;

extern NSString * const ALLOWED_PARAM_NAME;
extern NSString * const ENTITY_JSON_KEY;
extern NSString * const APPLICATION_PROVISION_ENTITY;
extern NSString * const GROUP_PROVISION_ENTITY;
extern NSString * const BAD_TOKEN_RESPONSE;


/**
 * This method submits the Certificate Signing Request (CSR) to the the server.
 * @param csr Optional. JSON object with custom content to sign.
 * @param challenge Mandatory. Challenge JSON object received from the server.
 */
-(void) submitCsr : (NSDictionary *) csr : (NSDictionary *) challenge ;

/**
 * This method is responsible for creating custom properties that are added to CSR.
 * @param challenge Mandatory. Challenge JSON object received from the server.
 */

-(void) createJsonCsr : (NSDictionary *) challenge;

@end
