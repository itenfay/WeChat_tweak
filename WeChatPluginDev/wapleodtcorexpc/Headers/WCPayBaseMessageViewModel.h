//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayNetImageResource;

@interface WCPayBaseMessageViewModel
{
    NSString *_iconUrl;
    unsigned long long _bubbleType;
    WCPayNetImageResource *_m_iconImageResource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayNetImageResource *m_iconImageResource; // @synthesize m_iconImageResource=_m_iconImageResource;
@property(readonly, nonatomic) unsigned long long bubbleType; // @synthesize bubbleType=_bubbleType;
@property(readonly, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(readonly, nonatomic) NSString *iconName;
@property(readonly, nonatomic) double iconSize;
@property(readonly, nonatomic) NSString *descText;
@property(readonly, nonatomic) NSString *titleText;
- (id)sourceIcon;
- (id)sourceTitle;
- (_Bool)isShowSourceView;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (void)getIconImageResource:(CDUnknownBlockType)arg1;
- (void)updateBgBubbleType:(unsigned long long)arg1;

@end

