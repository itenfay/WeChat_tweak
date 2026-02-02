//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCanvasComponentShareInfo
{
    _Bool _reportClickEventByOwner;
    NSString *_shareText;
    NSString *_fontColor;
    long long _shareActionType;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool reportClickEventByOwner; // @synthesize reportClickEventByOwner=_reportClickEventByOwner;
@property(nonatomic) long long shareActionType; // @synthesize shareActionType=_shareActionType;
@property(retain, nonatomic) NSString *fontColor; // @synthesize fontColor=_fontColor;
@property(retain, nonatomic) NSString *shareText; // @synthesize shareText=_shareText;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

