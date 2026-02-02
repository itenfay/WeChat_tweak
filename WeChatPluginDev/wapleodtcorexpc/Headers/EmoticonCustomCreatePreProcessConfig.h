//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface EmoticonCustomCreatePreProcessConfig : NSObject
{
    unsigned long long _autoSizeCrop;
    struct CGRect _cropFrame;
}

@property(nonatomic) struct CGRect cropFrame; // @synthesize cropFrame=_cropFrame;
@property(nonatomic) unsigned long long autoSizeCrop; // @synthesize autoSizeCrop=_autoSizeCrop;
- (id)init;

@end

