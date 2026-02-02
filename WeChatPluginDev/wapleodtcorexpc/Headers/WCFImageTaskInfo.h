//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CdnSnsTaskInfo, NSString, WCFImageKey;

@interface WCFImageTaskInfo : NSObject
{
    CdnSnsTaskInfo *_cdn;
    WCFImageKey *_imageKey;
    unsigned long long _scene;
    unsigned long long _feedMediaType;
    NSString *_tid;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) unsigned long long feedMediaType; // @synthesize feedMediaType=_feedMediaType;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(readonly, nonatomic) WCFImageKey *imageKey; // @synthesize imageKey=_imageKey;
@property(retain, nonatomic) CdnSnsTaskInfo *cdn; // @synthesize cdn=_cdn;
- (long long)type;
- (id)initWithImageKey:(id)arg1 cdnTask:(id)arg2;

@end

