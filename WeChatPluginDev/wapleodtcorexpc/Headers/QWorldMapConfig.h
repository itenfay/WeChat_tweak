//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface QWorldMapConfig : NSObject
{
    NSArray *_originData;
    NSMutableArray *_sources;
}

+ (id)localSourceVersionForScene:(int)arg1 isBingSource:(_Bool)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *sources; // @synthesize sources=_sources;
- (void)save:(_Bool)arg1;
- (id)initWithArray:(id)arg1;

@end

