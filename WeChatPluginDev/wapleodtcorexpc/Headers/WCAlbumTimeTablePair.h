//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAlbumTimeTablePair : NSObject
{
    NSString *_showingStr;
    NSString *_timeStr;
}

+ (id)pairByUInt:(unsigned int)arg1;
+ (id)pairWithShowingStr:(id)arg1 timeStr:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *timeStr; // @synthesize timeStr=_timeStr;
@property(readonly, copy, nonatomic) NSString *showingStr; // @synthesize showingStr=_showingStr;
- (id)initWithShowingStr:(id)arg1 timeStr:(id)arg2;

@end

