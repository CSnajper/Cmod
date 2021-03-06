static SkillCFGData data;

methodmap SkillCFG __nullable__ < SkillID {
  property ForwardPrepareSkill fwdPrepare {
    public get() {
      return data.fwdPrepareArray.getValue(as<int>(this));
    }

    public set(ForwardPrepareSkill fwdPrepare) {
      data.fwdPrepareArray.setValue(as<int>(this), fwdPrepare);
    }
  }

  property ForwardStartSkill fwdStart {
    public get() {
      return data.fwdStartArray.getValue(as<int>(this));
    }

    public set(ForwardStartSkill fwdStart) {
      data.fwdStartArray.setValue(as<int>(this), fwdStart)
    }
  }

  property ForwardStopSkill fwdStop {
    public get() {
      return data.fwdStopArray.getValue(as<int>(this));
    }

    public set(ForwardStopSkill fwdStop) {
      data.fwdStopArray.setValue(as<int>(this), fwdStop)
    }
  }

  public SkillCFG(SkillID skillID) {
    SkillCFG skill = as<SkillCFG>(skillID);
    skill.fwdPrepare = new ForwardPrepareSkill();
    skill.fwdStart = new ForwardStartSkill();
    skill.fwdStop = new ForwardStopSkill();
    return skill;
  }

  public void remove() {
    this.fwdPrepare.remove();
    this.fwdStart.remove();
    this.fwdStop.remove();
    this.fwdPrepare = null;
    this.fwdStart = null;
    this.fwdStop = null;
  }
}
