//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, WCAdHighlightTagInfo, WCDataItem;

@interface WCAdHighlightTagView
{
    WCDataItem *_dataItem;
    WCAdHighlightTagInfo *_tagInfo;
    MMUILabel *_titleLabel;
    MMUILabel *_numberTitleLabel;
    unsigned long long _contentItemScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long contentItemScene; // @synthesize contentItemScene=_contentItemScene;
@property(retain, nonatomic) MMUILabel *numberTitleLabel; // @synthesize numberTitleLabel=_numberTitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCAdHighlightTagInfo *tagInfo; // @synthesize tagInfo=_tagInfo;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)updateView;
- (void)updateDataItem:(id)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 tagInfo:(id)arg2 dataItem:(id)arg3 contentItemScene:(unsigned long long)arg4;

@end

