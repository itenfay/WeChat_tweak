//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QBJceStreamNew : NSObject
{
    char *_streamBuffer;
    int _streamSize;
    int _cursor;
}

@property(nonatomic) int cursor; // @synthesize cursor=_cursor;
@property(nonatomic) int streamSize; // @synthesize streamSize=_streamSize;
@property(nonatomic) char *streamBuffer; // @synthesize streamBuffer=_streamBuffer;
- (id)description;
- (id)data;
- (id)init;

@end

