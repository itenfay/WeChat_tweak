//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MSEFavImageTask : NSObject
{
    NSArray *_imageTaskIDs;
}

+ (void)initialize;
+ (void)PBArrayAdd_imageTaskIDs;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *imageTaskIDs; // @synthesize imageTaskIDs=_imageTaskIDs;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

