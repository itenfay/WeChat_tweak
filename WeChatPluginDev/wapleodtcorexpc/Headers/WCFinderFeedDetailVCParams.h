//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderFeedDetailVCParams : NSObject
{
    _Bool _expandToStream;
    _Bool _showLBSJumpInfo;
    _Bool _hideLike;
    _Bool _fromNewLife;
    int _customCommenScene;
}

+ (id)defaultParams;
@property(nonatomic) _Bool fromNewLife; // @synthesize fromNewLife=_fromNewLife;
@property(nonatomic) _Bool hideLike; // @synthesize hideLike=_hideLike;
@property(nonatomic) int customCommenScene; // @synthesize customCommenScene=_customCommenScene;
@property(nonatomic) _Bool showLBSJumpInfo; // @synthesize showLBSJumpInfo=_showLBSJumpInfo;
@property(nonatomic) _Bool expandToStream; // @synthesize expandToStream=_expandToStream;

@end

