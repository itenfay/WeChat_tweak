//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCWebviewNavigationEvent
{
    unsigned int _eventValue;
}

@property(nonatomic) unsigned int eventValue; // @synthesize eventValue=_eventValue;
- (id)eventDescription;
- (unsigned long long)eventHashValue;
- (id)initWithEventValue:(unsigned int)arg1;

@end

