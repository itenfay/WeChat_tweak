//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WCBGAuthor;

@interface WCBGAlbum : NSObject
{
    WCBGAuthor *_author;
    NSMutableArray *_groupList;
}

+ (void)initialize;
+ (void)PBArrayAdd_groupList;
+ (void)PBArrayAdd_author;
+ (id)bgAlbumFromServerObject:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *groupList; // @synthesize groupList=_groupList;
@property(retain, nonatomic) WCBGAuthor *author; // @synthesize author=_author;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

