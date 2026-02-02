//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveCommonOnlineMemberSheetOwner : NSObject
{
    unsigned int _boardType;
    NSString *_boardKey;
    NSString *_ownerName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property(nonatomic) unsigned int boardType; // @synthesize boardType=_boardType;
@property(retain, nonatomic) NSString *boardKey; // @synthesize boardKey=_boardKey;

@end

