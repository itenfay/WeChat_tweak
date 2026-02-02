//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface ResendFavItem : NSObject
{
    unsigned int _favId;
    unsigned int _localFavId;
    unsigned int _itemStatus;
    NSMutableArray *_fileIdList;
}

+ (void)initialize;
+ (void)PBArrayAdd_fileIdList;
+ (void)PBArrayAdd_localFavId;
+ (void)PBArrayAdd_favId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int itemStatus; // @synthesize itemStatus=_itemStatus;
@property(retain, nonatomic) NSMutableArray *fileIdList; // @synthesize fileIdList=_fileIdList;
@property(nonatomic) unsigned int localFavId; // @synthesize localFavId=_localFavId;
@property(nonatomic) unsigned int favId; // @synthesize favId=_favId;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

