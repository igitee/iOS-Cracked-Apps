//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CTTrainFilterSectionViewDelegate.h"

@class CTTrainFilterSectionView, CTTrainSeniorFilterModel, NSLayoutConstraint, NSString, UIScrollView;

@interface CTTrainListFilterView : UIView <CTTrainFilterSectionViewDelegate>
{
    CTTrainSeniorFilterModel *_originalFilter;
    id <CTTrainListFilterViewDelegate> _delegate;
    UIView *_viewContainerContent;
    UIScrollView *_scrollViewContent;
    NSLayoutConstraint *_contentViewBottomConstraint;
    CTTrainSeniorFilterModel *_currentFilter;
    CTTrainFilterSectionView *_departStationSection;
}

@property(retain, nonatomic) CTTrainFilterSectionView *departStationSection; // @synthesize departStationSection=_departStationSection;
@property(retain, nonatomic) CTTrainSeniorFilterModel *currentFilter; // @synthesize currentFilter=_currentFilter;
@property(nonatomic) __weak NSLayoutConstraint *contentViewBottomConstraint; // @synthesize contentViewBottomConstraint=_contentViewBottomConstraint;
@property(retain, nonatomic) UIScrollView *scrollViewContent; // @synthesize scrollViewContent=_scrollViewContent;
@property(retain, nonatomic) UIView *viewContainerContent; // @synthesize viewContainerContent=_viewContainerContent;
@property(nonatomic) __weak id <CTTrainListFilterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic, setter=setOriginalFilter:) CTTrainSeniorFilterModel *originalFilter; // @synthesize originalFilter=_originalFilter;
- (void).cxx_destruct;
- (void)filterSectionView:(id)arg1 valueChangedWithItem:(id)arg2 selected:(_Bool)arg3;
- (void)hideContentView;
- (void)showContentView;
- (void)onConfirmButton:(id)arg1;
- (void)onCancelButton:(id)arg1;
- (void)setupStationSection;
- (void)setupDepartTimeSection;
- (void)setupTrainTypeSection;
- (void)setupContent;
- (void)didMoveToSuperview;
- (id)initViewWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

