//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMBGMPanelPublishContext;
@protocol MMBGMSelectedTabTableViewCellDataReportSource, MMBGMSelectedTabTableViewCellDelegate;

@interface MMBGMSelectedTabTableBaseCell : UITableViewCell
{
    id <MMBGMSelectedTabTableViewCellDelegate> _delegate;
    id <MMBGMSelectedTabTableViewCellDataReportSource> _dataReportSource;
    MMBGMPanelPublishContext *_publishContext;
}

+ (double)cellHeight;
+ (id)cellID;
- (void).cxx_destruct;
@property(retain, nonatomic) MMBGMPanelPublishContext *publishContext; // @synthesize publishContext=_publishContext;
@property(nonatomic) __weak id <MMBGMSelectedTabTableViewCellDataReportSource> dataReportSource; // @synthesize dataReportSource=_dataReportSource;
@property(nonatomic) __weak id <MMBGMSelectedTabTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)panelConfig;
- (_Bool)isPlayable;
- (void)setIsCellSelected:(_Bool)arg1;
- (void)updateWithMusicData:(id)arg1 config:(id)arg2;
- (id)searchWord;
- (unsigned long long)tabType;
- (id)getMusicInfo;
- (id)getMusicId;
- (id)genReportDict;
- (void)configDataReport;

@end

