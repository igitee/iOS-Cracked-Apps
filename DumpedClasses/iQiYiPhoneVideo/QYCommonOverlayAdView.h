//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QYCommonOverlayModel, QYTouchButton, QYTouchControl, UIImageView;
@protocol QYCommonOverlayAdViewDelegate;

@interface QYCommonOverlayAdView : UIView
{
    int _screenMode;
    struct CGRect _parentFrame;
    long long _secondsRemain;
    QYCommonOverlayModel *_viewData;
    id <QYCommonOverlayAdViewDelegate> _delegate;
    QYTouchControl *_adContentView;
    QYTouchButton *_adCloseButton;
    UIView *_adCornerTag;
    UIImageView *_adImageView;
}

@property(retain, nonatomic) UIImageView *adImageView; // @synthesize adImageView=_adImageView;
@property(retain, nonatomic) UIView *adCornerTag; // @synthesize adCornerTag=_adCornerTag;
@property(retain, nonatomic) QYTouchButton *adCloseButton; // @synthesize adCloseButton=_adCloseButton;
@property(retain, nonatomic) QYTouchControl *adContentView; // @synthesize adContentView=_adContentView;
@property(nonatomic) __weak id <QYCommonOverlayAdViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QYCommonOverlayModel *viewData; // @synthesize viewData=_viewData;
- (void).cxx_destruct;
- (void)timeCountdown;
- (void)fire;
- (void)resume;
- (void)pause;
- (void)adCloseButtonClick:(id)arg1;
- (void)adDidClick;
- (void)removeView;
- (void)closeSelf;
- (void)removeSelf;
- (void)changeViewStyle;
- (void)setParentFrame:(struct CGRect)arg1 screenMode:(int)arg2;
- (_Bool)completeViewData:(struct CGSize)arg1;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;

@end

