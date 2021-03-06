//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class FBButton, FBPagesCreatePageGenericView, FBRichTextView, FBWebImageDownloaderSessionFactory, NSURL;
@protocol FBPagesCreatePageInitialViewDelegate;

@interface FBPagesCreatePageInitialView : UIScrollView
{
    FBWebImageDownloaderSessionFactory *_factory;
    FBPagesCreatePageGenericView *_genericView;
    FBButton *_startButton;
    FBRichTextView *_termsTextView;
    NSURL *_termsURL;
    id <FBPagesCreatePageInitialViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_configureTerms;
- (void)_configureStartButton;
- (void)_configureGenericView;
- (void)_linkTapped:(id)arg1 event:(id)arg2;
- (void)_startButtonTapped:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 factory:(id)arg2 delegate:(id)arg3;

@end

