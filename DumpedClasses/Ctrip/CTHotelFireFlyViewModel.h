//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FireflyInfo, NSString;

@interface CTHotelFireFlyViewModel : NSObject
{
    NSString *_userId;
    FireflyInfo *_fireflyInfo;
    NSString *_testResult;
}

@property(copy, nonatomic) NSString *testResult; // @synthesize testResult=_testResult;
@property(retain, nonatomic) FireflyInfo *fireflyInfo; // @synthesize fireflyInfo=_fireflyInfo;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (void)toModel:(id)arg1;
- (id)changeModel;
- (id)init;

@end

