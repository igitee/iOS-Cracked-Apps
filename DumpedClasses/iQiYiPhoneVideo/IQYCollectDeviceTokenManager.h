//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DataLoadManager.h"

@class NSString;

@interface IQYCollectDeviceTokenManager : DataLoadManager
{
    NSString *_deviceToken;
    NSString *_msg_sw;
    NSString *_pp_msg_sw;
}

@property(retain, nonatomic) NSString *pp_msg_sw; // @synthesize pp_msg_sw=_pp_msg_sw;
@property(retain, nonatomic) NSString *msg_sw; // @synthesize msg_sw=_msg_sw;
@property(retain, nonatomic) NSString *deviceToken; // @synthesize deviceToken=_deviceToken;
- (void).cxx_destruct;
- (_Bool)parse:(id)arg1;
- (id)urlStl;
- (void)loadData;
- (id)checkDeviceToken;
- (id)init;

@end

