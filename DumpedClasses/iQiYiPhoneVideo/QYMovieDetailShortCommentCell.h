//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYMovieDetailBaseCell.h"

#import "QYMovieCommentCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, QYMovieCommentCell, UILabel, UITableView, UIView;
@protocol QYMovieDetailShortCommentCellDelegate;

@interface QYMovieDetailShortCommentCell : QYMovieDetailBaseCell <UITableViewDelegate, UITableViewDataSource, QYMovieCommentCellDelegate>
{
    id <QYMovieDetailShortCommentCellDelegate> _delegate;
    UITableView *_shortCommentTableView;
    NSArray *_shortCommentArray;
    UIView *_moreCommentFooterView;
    QYMovieCommentCell *_presentCell;
    UILabel *_writeCommentLabel;
    NSMutableArray *_commentViewModelArray;
}

@property(retain, nonatomic) NSMutableArray *commentViewModelArray; // @synthesize commentViewModelArray=_commentViewModelArray;
@property(retain, nonatomic) UILabel *writeCommentLabel; // @synthesize writeCommentLabel=_writeCommentLabel;
@property(retain, nonatomic) QYMovieCommentCell *presentCell; // @synthesize presentCell=_presentCell;
@property(retain, nonatomic) UIView *moreCommentFooterView; // @synthesize moreCommentFooterView=_moreCommentFooterView;
@property(retain, nonatomic) NSArray *shortCommentArray; // @synthesize shortCommentArray=_shortCommentArray;
@property(retain, nonatomic) UITableView *shortCommentTableView; // @synthesize shortCommentTableView=_shortCommentTableView;
@property(nonatomic) __weak id <QYMovieDetailShortCommentCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)supportThisCommentWithType:(_Bool)arg1 data:(id)arg2;
- (void)writeComment;
- (void)moreComment;
- (double)cellHeightForData:(id)arg1 limitedToWidth:(double)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)commentArrayToViewModelArray;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

