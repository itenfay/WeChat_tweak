//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterStandardTypedData, NSNumber, NSString;

@interface CommentInputResult : NSObject
{
    NSString *_inputResult;
    NSNumber *_realIdentityType;
    FlutterStandardTypedData *_commentInfo;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithInputResult:(id)arg1 realIdentityType:(id)arg2 commentInfo:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) FlutterStandardTypedData *commentInfo; // @synthesize commentInfo=_commentInfo;
@property(retain, nonatomic) NSNumber *realIdentityType; // @synthesize realIdentityType=_realIdentityType;
@property(copy, nonatomic) NSString *inputResult; // @synthesize inputResult=_inputResult;
- (id)toList;

@end

