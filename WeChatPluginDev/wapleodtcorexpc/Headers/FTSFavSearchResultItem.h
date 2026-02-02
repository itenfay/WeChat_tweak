//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FavoritesItem, NSString;

@interface FTSFavSearchResultItem : NSObject
{
    unsigned int _localId;
    unsigned int _updateTime;
    FavoritesItem *_favItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FavoritesItem *favItem; // @synthesize favItem=_favItem;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
- (id)diffIdentifier;
@property(nonatomic, readonly) NSString *userName;

@end

