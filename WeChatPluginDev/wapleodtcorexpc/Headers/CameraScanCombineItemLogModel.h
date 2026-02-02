//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface CameraScanCombineItemLogModel : NSObject
{
    unsigned long long _itemIdx;
    NSMutableArray *_arrFrames;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrFrames; // @synthesize arrFrames=_arrFrames;
@property(nonatomic) unsigned long long itemIdx; // @synthesize itemIdx=_itemIdx;

@end

