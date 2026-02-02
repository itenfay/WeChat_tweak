//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderCmdItem, FinderCmdRet;

@interface MMFinderLiveAudienceCmdItemRequestWrap : NSObject
{
    FinderCmdItem *_cmdItem;
    FinderCmdRet *_cmdRet;
    CDUnknownBlockType _completeCallBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType completeCallBlock; // @synthesize completeCallBlock=_completeCallBlock;
@property(retain, nonatomic) FinderCmdRet *cmdRet; // @synthesize cmdRet=_cmdRet;
@property(retain, nonatomic) FinderCmdItem *cmdItem; // @synthesize cmdItem=_cmdItem;

@end

