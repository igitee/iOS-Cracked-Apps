//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CTDevice : NSObject
{
}

+ (_Bool)isValidIdfaString:(id)arg1;
+ (id)idfa;
+ (id)getCombinationUUID;
+ (id)uniqueIdentifierWithMac;
+ (id)uniqueIdentifierWithMacAndBundleId;
+ (id)uniqueIdentifier;
+ (id)deviceString;
+ (_Bool)isRemoteNotificationEnable;
+ (_Bool)isSimulator;
+ (_Bool)isDeviceRetina;
+ (_Bool)isDeviceIPhone5;
+ (_Bool)isIPad;
+ (id)macaddressWithoutColon;
+ (id)macaddress;
+ (_Bool)isJailBreak;

@end

