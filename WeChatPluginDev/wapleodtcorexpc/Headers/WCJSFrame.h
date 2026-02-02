//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCJSFrame : NSObject
{
    int _line;
    int _column;
    int _repeatCount;
    NSString *_name;
    NSString *_path;
    NSMutableArray *_subFrames;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *subFrames; // @synthesize subFrames=_subFrames;
@property(nonatomic) int repeatCount; // @synthesize repeatCount=_repeatCount;
@property(nonatomic) int column; // @synthesize column=_column;
@property(nonatomic) int line; // @synthesize line=_line;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)makeInfoDict;
- (_Bool)isEqual:(id)arg1;
- (void)addSubFrame:(id)arg1;
- (id)initWithRepeatCount:(int)arg1 name:(id)arg2 path:(id)arg3 line:(int)arg4 column:(int)arg5;

@end

