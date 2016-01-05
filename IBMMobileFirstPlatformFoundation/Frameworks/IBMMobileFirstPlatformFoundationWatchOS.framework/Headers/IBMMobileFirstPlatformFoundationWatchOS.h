/*
 *  Licensed Materials - Property of IBM
 *  5725-I43 (C) Copyright IBM Corp. 2011, 2013. All Rights Reserved.
 *  US Government Users Restricted Rights - Use, duplication or
 *  disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 */
//
//  IBMMobileFirstPlatformFoundationWatchOS.h
//  IBMMobileFirstPlatformFoundationWatchOS
//
//  Created by C A on 3/11/15.
//  Copyright (c) 2015 IBM. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for IBMMobileFirstPlatformFoundationWatchOS.
FOUNDATION_EXPORT double IBMMobileFirstPlatformFoundationWatchOSVersionNumber;

//! Project version string for IBMMobileFirstPlatformFoundationWatchOS.
FOUNDATION_EXPORT const unsigned char IBMMobileFirstPlatformFoundationWatchOSVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <IBMMobileFirstPlatformFoundationWatchOS/PublicHeader.h>


#import <IBMMobileFirstPlatformFoundationWatchOS/BaseChallengeHandler.h>
#import <IBMMobileFirstPlatformFoundationWatchOS/BaseDeviceAuthChallengeHandler.h>
#import <IBMMobileFirstPlatformFoundationWatchOS/BaseProvisioningChallengeHandler.h>
#import <IBMMobileFirstPlatformFoundationWatchOS/ChallengeHandler.h>
#import <IBMMobileFirstPlatformFoundationWatchOS/OCLogger.h>
#import <IBMMobileFirstPlatformFoundationWatchOS/OCLogger+Constants.h>
#import <IBMMobileFirstPlatformFoundationWatchOS/WLAnalytics.h>
#import <IBMMobileFirstPlatformFoundationWatchOS/WLAuthorizationManager.h>
#import <IBMMobileFirstPlatformFoundationWatchOS/WLChallengeHandler.h>
#import <IBMMobileFirstPlatformFoundationWatchOS/WLClient.h>
#import <IBMMobileFirstPlatformFoundationWatchOS/WLCookieExtractor.h>
#import <IBMMobileFirstPlatformFoundationWatchOS/WLDelegate.h>
#import <IBMMobileFirstPlatformFoundationWatchOS/WLDeviceAuthManager.h>
#import <IBMMobileFirstPlatformFoundationWatchOS/WLEventSourceListener.h>
#import <IBMMobileFirstPlatformFoundationWatchOS/WLFailResponse.h>
#import <IBMMobileFirstPlatformFoundationWatchOS/WLOnReadyToSubscribeListener.h>
#import <IBMMobileFirstPlatformFoundationWatchOS/WLProcedureInvocationData.h>
#import <IBMMobileFirstPlatformFoundationWatchOS/WLProcedureInvocationResult.h>
#import <IBMMobileFirstPlatformFoundationWatchOS/WLPush.h>
#import <IBMMobileFirstPlatformFoundationWatchOS/WLPushOptions.h>
#import <IBMMobileFirstPlatformFoundationWatchOS/WLResourceRequest.h>
#import <IBMMobileFirstPlatformFoundationWatchOS/WLResponse.h>
#import <IBMMobileFirstPlatformFoundationWatchOS/WLResponseListener.h>
#import <IBMMobileFirstPlatformFoundationWatchOS/WLSecurityUtils.h>
#import <IBMMobileFirstPlatformFoundationWatchOS/WLSecurityCommonUtils.h>
#import <IBMMobileFirstPlatformFoundationWatchOS/WLSimpleDataSharing.h>
//#import <IBMMobileFirstPlatformFoundationWatchOS/WLWatchConnectivityManager.h>
#import <IBMMobileFirstPlatformFoundationWatchOS/WLTrusteer.h>
#import <IBMMobileFirstPlatformFoundationWatchOS/WLUserCertAuth.h>
//#import <IBMMobileFirstPlatformFoundationWatchOS/WLCertManagerCommon.h>
