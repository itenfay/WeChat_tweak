//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterStandardTypedData;

@interface FLTPlatformProto : NSObject
{
    FlutterStandardTypedData *_byteArray;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithByteArray:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FlutterStandardTypedData *byteArray; // @synthesize byteArray=_byteArray;
- (id)toList;

@end

