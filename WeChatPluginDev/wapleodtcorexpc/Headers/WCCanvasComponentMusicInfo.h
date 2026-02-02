//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCCanvasComponentMusicItem;

@interface WCCanvasComponentMusicInfo
{
    int _displayType;
    WCCanvasComponentMusicItem *_musicItem;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCCanvasComponentMusicItem *musicItem; // @synthesize musicItem=_musicItem;
@property(nonatomic) int displayType; // @synthesize displayType=_displayType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

