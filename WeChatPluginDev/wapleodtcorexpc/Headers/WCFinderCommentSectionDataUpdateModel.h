//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderCommentSectionDataUpdateModel : NSObject
{
    _Bool _forceUpdate;
    struct _NSRange _insertRange;
    struct _NSRange _deleteRange;
    struct _NSRange _updateRange;
}

@property(nonatomic) _Bool forceUpdate; // @synthesize forceUpdate=_forceUpdate;
@property(nonatomic) struct _NSRange updateRange; // @synthesize updateRange=_updateRange;
@property(nonatomic) struct _NSRange deleteRange; // @synthesize deleteRange=_deleteRange;
@property(nonatomic) struct _NSRange insertRange; // @synthesize insertRange=_insertRange;

@end

