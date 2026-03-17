//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CustomPlayerConfig : NSObject
{
    _Bool _isHDRLive;
    unsigned int _customRenderVal;
}

@property(nonatomic) unsigned int customRenderVal; // @synthesize customRenderVal=_customRenderVal;
@property(nonatomic) _Bool isHDRLive; // @synthesize isHDRLive=_isHDRLive;

@end

