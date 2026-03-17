//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface ShareMsgObj : NSObject
{
    unsigned int _createtime;
    long long _svrid;
    long long _newsvrid;
}

+ (id)genShareMsgObjWithNode:(struct XmlReaderNode_t *)arg1;
+ (id)genShareMsgObjWithMsgWrap:(id)arg1;
@property(nonatomic) long long newsvrid; // @synthesize newsvrid=_newsvrid;
@property(nonatomic) long long svrid; // @synthesize svrid=_svrid;
@property(nonatomic) unsigned int createtime; // @synthesize createtime=_createtime;
- (id)genSourceContent;

@end

