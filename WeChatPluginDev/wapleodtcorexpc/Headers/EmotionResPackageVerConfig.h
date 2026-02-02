//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface EmotionResPackageVerConfig : NSObject
{
    unsigned int _version;
    unsigned int _matchVersion;
}

+ (id)config:(id)arg1 type:(unsigned int)arg2;
@property(nonatomic) unsigned int matchVersion; // @synthesize matchVersion=_matchVersion;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C


// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

