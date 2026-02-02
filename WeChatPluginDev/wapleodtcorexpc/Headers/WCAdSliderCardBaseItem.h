//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCMediaItem;

@interface WCAdSliderCardBaseItem : NSObject
{
    WCMediaItem *_mediaItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

