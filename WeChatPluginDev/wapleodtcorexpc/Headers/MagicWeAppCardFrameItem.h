//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MagicSclFrameSetView;

@interface MagicWeAppCardFrameItem : NSObject
{
    unsigned int _bizType;
    unsigned int _frameId;
    MagicSclFrameSetView *_frameSetView;
    CDUnknownBlockType _insertCompletion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType insertCompletion; // @synthesize insertCompletion=_insertCompletion;
@property(retain, nonatomic) MagicSclFrameSetView *frameSetView; // @synthesize frameSetView=_frameSetView;
@property(nonatomic) unsigned int frameId; // @synthesize frameId=_frameId;
@property(nonatomic) unsigned int bizType; // @synthesize bizType=_bizType;

@end

