//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GiftLuaScriptRenderTask : NSObject
{
    NSString *_resPath;
    unsigned long long _renderSeq;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long renderSeq; // @synthesize renderSeq=_renderSeq;
@property(retain, nonatomic) NSString *resPath; // @synthesize resPath=_resPath;

@end

