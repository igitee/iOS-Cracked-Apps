//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMBandSettingView;

@protocol NMBandSettingViewDelegate <NSObject>
- (void)bandSettingView:(NMBandSettingView *)arg1 scrollToPercent:(float)arg2;
- (void)bandSettingViewValueChanged:(NMBandSettingView *)arg1 value:(long long)arg2 atIndex:(unsigned long long)arg3;
@end

