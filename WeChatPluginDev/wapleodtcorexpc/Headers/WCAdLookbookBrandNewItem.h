//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCMediaItem;

@interface WCAdLookbookBrandNewItem : NSObject
{
    WCMediaItem *_mediaItem;
    unsigned long long _zoomTriggerTimestamp;
    unsigned long long _zoomDuration;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long zoomDuration; // @synthesize zoomDuration=_zoomDuration;
@property(nonatomic) unsigned long long zoomTriggerTimestamp; // @synthesize zoomTriggerTimestamp=_zoomTriggerTimestamp;
@property(retain, nonatomic) WCMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

