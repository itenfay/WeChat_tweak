//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMLiveFeedStreamCommentContentView
{
}

+ (double)currentCommentTableWidth:(id)arg1;
+ (double)commentTableWidthLandScape:(id)arg1;
+ (double)commentTableWidthPortrait:(id)arg1;
+ (double)commentTableWidth:(id)arg1;
- (id)createUnReadCountLabel;
- (void)updateTrackingTipLabelWithDataUpdateDirection:(_Bool)arg1;
- (void)updateUnReadCountLabel:(unsigned long long)arg1;
- (struct CGRect)getCommentTableViewFrame;
- (void)layoutCommentTableView;
- (void)layoutUI;
- (void)handleUnReadCountLabelTap:(id)arg1;
- (id)commentDataMgr;

@end

