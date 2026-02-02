//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderRedDotMgrDataSourcePiplineFilter : NSObject
{
    NSString *_name;
    CDUnknownBlockType _filterBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType filterBlock; // @synthesize filterBlock=_filterBlock;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 filterBlock:(CDUnknownBlockType)arg2;

@end

