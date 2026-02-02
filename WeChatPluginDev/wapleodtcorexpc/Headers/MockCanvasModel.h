//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MockCanvasModel : NSObject
{
    NSString *_frameSetName;
    NSString *_frameSetData;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithFrameSetName:(id)arg1 frameSetData:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *frameSetData; // @synthesize frameSetData=_frameSetData;
@property(copy, nonatomic) NSString *frameSetName; // @synthesize frameSetName=_frameSetName;
- (id)toList;

@end

