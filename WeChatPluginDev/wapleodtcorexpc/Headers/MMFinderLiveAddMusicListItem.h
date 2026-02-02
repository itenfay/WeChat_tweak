//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveGetMusicTabListResponse, NSString;

@interface MMFinderLiveAddMusicListItem : NSObject
{
    _Bool _removeOnNil;
    unsigned int _tabType;
    FinderLiveGetMusicTabListResponse *_response;
    NSString *_listName;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool removeOnNil; // @synthesize removeOnNil=_removeOnNil;
@property(retain, nonatomic) NSString *listName; // @synthesize listName=_listName;
@property(nonatomic) unsigned int tabType; // @synthesize tabType=_tabType;
@property(copy, nonatomic) FinderLiveGetMusicTabListResponse *response; // @synthesize response=_response;
- (_Bool)shouldShow;

@end

