//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface OVCLowerThirdTextLayerBuildData : NSObject
{
    _Bool _shouldUsePlaceholder;
    NSDictionary *_mustacheData;
    NSDictionary *_userInputsByBlockID;
    NSDictionary *_defaultContentsByBlockID;
    NSDictionary *_placeholdersByBlockID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldUsePlaceholder; // @synthesize shouldUsePlaceholder=_shouldUsePlaceholder;
@property(readonly, nonatomic) NSDictionary *placeholdersByBlockID; // @synthesize placeholdersByBlockID=_placeholdersByBlockID;
@property(readonly, nonatomic) NSDictionary *defaultContentsByBlockID; // @synthesize defaultContentsByBlockID=_defaultContentsByBlockID;
@property(readonly, nonatomic) NSDictionary *userInputsByBlockID; // @synthesize userInputsByBlockID=_userInputsByBlockID;
@property(readonly, nonatomic) NSDictionary *mustacheData; // @synthesize mustacheData=_mustacheData;
- (id)initWithMustacheData:(id)arg1 userInputsByBlockID:(id)arg2 defaultContentsByBlockID:(id)arg3 placeholdersByBlockID:(id)arg4 shouldUsePlaceholder:(_Bool)arg5;

@end

