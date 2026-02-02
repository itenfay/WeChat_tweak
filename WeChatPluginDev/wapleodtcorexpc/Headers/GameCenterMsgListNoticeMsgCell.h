//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMUIView, MMWebImageView;

@interface GameCenterMsgListNoticeMsgCell
{
    MMWebImageView *_postImageView;
    MMUIView *_textBackView;
    MMUILabel *_briefLabel;
    MMUILabel *_detailLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) MMUILabel *briefLabel; // @synthesize briefLabel=_briefLabel;
@property(retain, nonatomic) MMUIView *textBackView; // @synthesize textBackView=_textBackView;
@property(retain, nonatomic) MMWebImageView *postImageView; // @synthesize postImageView=_postImageView;
- (void)updateWithCellData:(id)arg1;
- (void)setupGameCenterMsgListNoticeMsgCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

