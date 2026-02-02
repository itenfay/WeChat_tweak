//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPSubtitleFrameWrapper : NSObject
{
    _Bool _needUpdate;
    struct TPFrame *_subtitleFrame;
}

@property(nonatomic) struct TPFrame *subtitleFrame; // @synthesize subtitleFrame=_subtitleFrame;
@property(nonatomic) _Bool needUpdate; // @synthesize needUpdate=_needUpdate;
- (void)dealloc;
- (id)init;

@end

