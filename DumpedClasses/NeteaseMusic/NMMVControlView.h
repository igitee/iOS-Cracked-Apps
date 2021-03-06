//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMVideoControlBar.h"

@class NMMV, NMMVChangeDefinationButton, NMMVQuality, NMMVSwitchQualityView;

@interface NMMVControlView : NMVideoControlBar
{
    _Bool _showQualitySwitch;
    NMMVQuality *_selectedQuality;
    NMMVChangeDefinationButton *_qualityButton;
    NMMVSwitchQualityView *_qualitySwitchView;
    NMMV *_mv;
}

@property(nonatomic) _Bool showQualitySwitch; // @synthesize showQualitySwitch=_showQualitySwitch;
@property(retain, nonatomic) NMMV *mv; // @synthesize mv=_mv;
@property(retain, nonatomic) NMMVSwitchQualityView *qualitySwitchView; // @synthesize qualitySwitchView=_qualitySwitchView;
@property(retain, nonatomic) NMMVChangeDefinationButton *qualityButton; // @synthesize qualityButton=_qualityButton;
- (void).cxx_destruct;
- (void)enableQualitySwitch:(_Bool)arg1;
- (void)toggleQualitySwitchView:(_Bool)arg1;
- (void)setSelectedQuality:(id)arg1;
- (void)updateViewForFullScreenSwitch:(_Bool)arg1;
- (void)setDelegate:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

