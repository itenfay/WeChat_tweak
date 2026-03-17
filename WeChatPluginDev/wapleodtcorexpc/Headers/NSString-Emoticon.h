//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSString.h>

@interface NSString (Emoticon)
- (id)removeLastEmoticon;
- (id)insertIntoEmoticonStrWith:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)getEmoticonRanges;
- (id)getEmoticonStrs;
- (_Bool)isContainEmoticonOnly;
- (_Bool)isContainEmoticon;
@end

