//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenItem, TingShareLyricsContext;

@interface TingShareLyricsItem : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)itemFromXML:(struct XmlReaderNode_t *)arg1;
+ (id)xmlTagCustomToXMLProcesslistForConfigTag:(id)arg1;
+ (id)xmlTagCustomFromXMLProcesslistForConfigTag:(id)arg1;
- (id)titleShowText;
- (id)toTingItem;
- (id)toXML:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(retain, nonatomic) MMListenItem *listenItem; // @dynamic listenItem;
@property(retain, nonatomic) TingShareLyricsContext *lyricsContent; // @dynamic lyricsContent;

@end

