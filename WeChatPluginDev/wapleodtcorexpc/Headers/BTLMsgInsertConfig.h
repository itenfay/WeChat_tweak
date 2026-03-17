//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BTLMsgInsertConfig : NSObject
{
    _Bool _createNewGroup;
    _Bool _topContact;
    _Bool _canInsertToOldGroup;
    _Bool _updateDividerLine;
    int _atPos;
    unsigned int _groupId;
    int _predict;
    unsigned int _limitMaxWeight;
    unsigned int _createTime;
}

@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int limitMaxWeight; // @synthesize limitMaxWeight=_limitMaxWeight;
@property(nonatomic) int predict; // @synthesize predict=_predict;
@property(nonatomic) unsigned int groupId; // @synthesize groupId=_groupId;
@property(nonatomic) int atPos; // @synthesize atPos=_atPos;
@property(nonatomic) _Bool updateDividerLine; // @synthesize updateDividerLine=_updateDividerLine;
@property(nonatomic) _Bool canInsertToOldGroup; // @synthesize canInsertToOldGroup=_canInsertToOldGroup;
@property(nonatomic) _Bool topContact; // @synthesize topContact=_topContact;
@property(nonatomic) _Bool createNewGroup; // @synthesize createNewGroup=_createNewGroup;
- (id)description;
- (id)init;

@end

