//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAdRollTextView, WCAdURLImageView, WCDataItem;

@interface WCAdRollView
{
    WCDataItem *_dataItem;
    NSString *_iconUrl;
    WCAdURLImageView *_rollIcon;
    WCAdRollTextView *_rollText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdRollTextView *rollText; // @synthesize rollText=_rollText;
@property(retain, nonatomic) WCAdURLImageView *rollIcon; // @synthesize rollIcon=_rollIcon;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)onViewDisplay:(_Bool)arg1;
- (void)initView;
- (void)setTextList:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 dataItem:(id)arg2 iconUrl:(id)arg3 textList:(id)arg4;

@end

