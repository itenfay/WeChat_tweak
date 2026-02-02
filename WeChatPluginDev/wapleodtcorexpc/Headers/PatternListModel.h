//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface PatternListModel : NSObject
{
    long long _AbsoluteTime;
    NSArray *_Pattern;
}

+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *Pattern; // @synthesize Pattern=_Pattern;
@property(nonatomic) long long AbsoluteTime; // @synthesize AbsoluteTime=_AbsoluteTime;

@end

