//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WIWBHttpAnswerData.h"

@class WIUser;

@interface WIWBLoginAnswer : WIWBHttpAnswerData
{
    WIUser *user;
}

@property(retain, nonatomic) WIUser *user; // @synthesize user;
- (void)handleDataField:(id)arg1;
- (void)dealloc;
- (id)init;

@end

