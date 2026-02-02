//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderGroupLiveChatBoxId;

@interface MMFinderGroupLiveChatRedPointModel : NSObject
{
    _Bool _hasUnreadMsg;
    MMFinderGroupLiveChatBoxId *_boxId;
}

+ (id)genFinderBoxIdAndReaddot:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasUnreadMsg; // @synthesize hasUnreadMsg=_hasUnreadMsg;
@property(retain, nonatomic) MMFinderGroupLiveChatBoxId *boxId; // @synthesize boxId=_boxId;

@end

